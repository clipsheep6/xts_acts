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
#include "../ActsDeqpgles310009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008453_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008453_2 "single_basic_type.packed.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008453, VkglTestCase_008453_1, VkglTestCase_008453_2);

#define VkglTestCase_008454_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008454_2 "ingle_basic_type.packed.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008454, VkglTestCase_008454_1, VkglTestCase_008454_2);

#define VkglTestCase_008455_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008455_2 "single_basic_type.packed.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008455, VkglTestCase_008455_1, VkglTestCase_008455_2);

#define VkglTestCase_008456_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008456_2 ".single_basic_type.packed.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008456, VkglTestCase_008456_1, VkglTestCase_008456_2);

#define VkglTestCase_008457_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008457_2 "ingle_basic_type.packed.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008457, VkglTestCase_008457_1, VkglTestCase_008457_2);

#define VkglTestCase_008458_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008458_2 "single_basic_type.packed.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008458, VkglTestCase_008458_1, VkglTestCase_008458_2);

#define VkglTestCase_008459_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008459_2 ".single_basic_type.packed.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008459, VkglTestCase_008459_1, VkglTestCase_008459_2);

#define VkglTestCase_008460_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008460_2 "ingle_basic_type.packed.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008460, VkglTestCase_008460_1, VkglTestCase_008460_2);

#define VkglTestCase_008461_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008461_2 "single_basic_type.packed.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008461, VkglTestCase_008461_1, VkglTestCase_008461_2);

#define VkglTestCase_008462_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008462_2 ".single_basic_type.packed.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008462, VkglTestCase_008462_1, VkglTestCase_008462_2);

#define VkglTestCase_008463_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008463_2 "ingle_basic_type.packed.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008463, VkglTestCase_008463_1, VkglTestCase_008463_2);

#define VkglTestCase_008464_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008464_2 "single_basic_type.packed.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008464, VkglTestCase_008464_1, VkglTestCase_008464_2);

#define VkglTestCase_008465_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008465_2 ".single_basic_type.packed.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008465, VkglTestCase_008465_1, VkglTestCase_008465_2);

#define VkglTestCase_008466_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008466_2 "single_basic_type.packed.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008466, VkglTestCase_008466_1, VkglTestCase_008466_2);

#define VkglTestCase_008467_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008467_2 ".single_basic_type.packed.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008467, VkglTestCase_008467_1, VkglTestCase_008467_2);

#define VkglTestCase_008468_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008468_2 "single_basic_type.packed.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008468, VkglTestCase_008468_1, VkglTestCase_008468_2);

#define VkglTestCase_008469_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008469_2 "ingle_basic_type.packed.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008469, VkglTestCase_008469_1, VkglTestCase_008469_2);

#define VkglTestCase_008470_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008470_2 "single_basic_type.packed.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008470, VkglTestCase_008470_1, VkglTestCase_008470_2);

#define VkglTestCase_008471_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008471_2 "single_basic_type.packed.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008471, VkglTestCase_008471_1, VkglTestCase_008471_2);

#define VkglTestCase_008472_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008472_2 "ingle_basic_type.packed.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008472, VkglTestCase_008472_1, VkglTestCase_008472_2);

#define VkglTestCase_008473_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008473_2 "single_basic_type.packed.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008473, VkglTestCase_008473_1, VkglTestCase_008473_2);

#define VkglTestCase_008474_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008474_2 "single_basic_type.packed.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008474, VkglTestCase_008474_1, VkglTestCase_008474_2);

#define VkglTestCase_008475_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008475_2 "ingle_basic_type.packed.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008475, VkglTestCase_008475_1, VkglTestCase_008475_2);

#define VkglTestCase_008476_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008476_2 "single_basic_type.packed.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008476, VkglTestCase_008476_1, VkglTestCase_008476_2);

#define VkglTestCase_008477_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008477_2 ".single_basic_type.packed.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008477, VkglTestCase_008477_1, VkglTestCase_008477_2);

#define VkglTestCase_008478_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008478_2 "ingle_basic_type.packed.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008478, VkglTestCase_008478_1, VkglTestCase_008478_2);

#define VkglTestCase_008479_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008479_2 "single_basic_type.packed.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008479, VkglTestCase_008479_1, VkglTestCase_008479_2);

#define VkglTestCase_008480_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008480_2 "single_basic_type.packed.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008480, VkglTestCase_008480_1, VkglTestCase_008480_2);

#define VkglTestCase_008481_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008481_2 "ingle_basic_type.packed.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008481, VkglTestCase_008481_1, VkglTestCase_008481_2);

#define VkglTestCase_008482_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008482_2 "single_basic_type.packed.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008482, VkglTestCase_008482_1, VkglTestCase_008482_2);

#define VkglTestCase_008483_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008483_2 "single_basic_type.packed.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008483, VkglTestCase_008483_1, VkglTestCase_008483_2);

#define VkglTestCase_008484_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008484_2 "ingle_basic_type.packed.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008484, VkglTestCase_008484_1, VkglTestCase_008484_2);

#define VkglTestCase_008485_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008485_2 "single_basic_type.packed.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008485, VkglTestCase_008485_1, VkglTestCase_008485_2);

#define VkglTestCase_008486_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008486_2 "single_basic_type.packed.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008486, VkglTestCase_008486_1, VkglTestCase_008486_2);

#define VkglTestCase_008487_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008487_2 "ingle_basic_type.packed.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008487, VkglTestCase_008487_1, VkglTestCase_008487_2);

#define VkglTestCase_008488_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008488_2 "single_basic_type.packed.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008488, VkglTestCase_008488_1, VkglTestCase_008488_2);

#define VkglTestCase_008489_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008489_2 "ut.single_basic_type.packed.bool"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008489, VkglTestCase_008489_1, VkglTestCase_008489_2);

#define VkglTestCase_008490_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008490_2 "ut.single_basic_type.packed.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008490, VkglTestCase_008490_1, VkglTestCase_008490_2);

#define VkglTestCase_008491_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008491_2 "ut.single_basic_type.packed.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008491, VkglTestCase_008491_1, VkglTestCase_008491_2);

#define VkglTestCase_008492_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008492_2 "ut.single_basic_type.packed.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008492, VkglTestCase_008492_1, VkglTestCase_008492_2);

#define VkglTestCase_008493_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008493_2 ".single_basic_type.packed.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008493, VkglTestCase_008493_1, VkglTestCase_008493_2);

#define VkglTestCase_008494_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008494_2 "ingle_basic_type.packed.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008494, VkglTestCase_008494_1, VkglTestCase_008494_2);

#define VkglTestCase_008495_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008495_2 "single_basic_type.packed.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008495, VkglTestCase_008495_1, VkglTestCase_008495_2);

#define VkglTestCase_008496_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008496_2 "le_basic_type.packed.row_major_lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008496, VkglTestCase_008496_1, VkglTestCase_008496_2);

#define VkglTestCase_008497_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008497_2 "_basic_type.packed.row_major_mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008497, VkglTestCase_008497_1, VkglTestCase_008497_2);

#define VkglTestCase_008498_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008498_2 "e_basic_type.packed.row_major_highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008498, VkglTestCase_008498_1, VkglTestCase_008498_2);

#define VkglTestCase_008499_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008499_2 "_basic_type.packed.column_major_lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008499, VkglTestCase_008499_1, VkglTestCase_008499_2);

#define VkglTestCase_008500_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008500_2 "basic_type.packed.column_major_mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008500, VkglTestCase_008500_1, VkglTestCase_008500_2);

#define VkglTestCase_008501_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008501_2 "_basic_type.packed.column_major_highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008501, VkglTestCase_008501_1, VkglTestCase_008501_2);

#define VkglTestCase_008502_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008502_2 ".single_basic_type.packed.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008502, VkglTestCase_008502_1, VkglTestCase_008502_2);

#define VkglTestCase_008503_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008503_2 "ingle_basic_type.packed.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008503, VkglTestCase_008503_1, VkglTestCase_008503_2);

#define VkglTestCase_008504_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008504_2 "single_basic_type.packed.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008504, VkglTestCase_008504_1, VkglTestCase_008504_2);

#define VkglTestCase_008505_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008505_2 "le_basic_type.packed.row_major_lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008505, VkglTestCase_008505_1, VkglTestCase_008505_2);

#define VkglTestCase_008506_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008506_2 "_basic_type.packed.row_major_mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008506, VkglTestCase_008506_1, VkglTestCase_008506_2);

#define VkglTestCase_008507_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008507_2 "e_basic_type.packed.row_major_highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008507, VkglTestCase_008507_1, VkglTestCase_008507_2);

#define VkglTestCase_008508_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008508_2 "_basic_type.packed.column_major_lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008508, VkglTestCase_008508_1, VkglTestCase_008508_2);

#define VkglTestCase_008509_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008509_2 "basic_type.packed.column_major_mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008509, VkglTestCase_008509_1, VkglTestCase_008509_2);

#define VkglTestCase_008510_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008510_2 "_basic_type.packed.column_major_highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008510, VkglTestCase_008510_1, VkglTestCase_008510_2);

#define VkglTestCase_008511_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_008511_2 ".single_basic_type.packed.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008511, VkglTestCase_008511_1, VkglTestCase_008511_2);

#define VkglTestCase_008512_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008512_2 "ingle_basic_type.packed.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008512, VkglTestCase_008512_1, VkglTestCase_008512_2);

#define VkglTestCase_008513_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008513_2 "single_basic_type.packed.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008513, VkglTestCase_008513_1, VkglTestCase_008513_2);

#define VkglTestCase_008514_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008514_2 "le_basic_type.packed.row_major_lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008514, VkglTestCase_008514_1, VkglTestCase_008514_2);

#define VkglTestCase_008515_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008515_2 "_basic_type.packed.row_major_mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008515, VkglTestCase_008515_1, VkglTestCase_008515_2);

#define VkglTestCase_008516_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008516_2 "e_basic_type.packed.row_major_highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008516, VkglTestCase_008516_1, VkglTestCase_008516_2);

#define VkglTestCase_008517_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008517_2 "_basic_type.packed.column_major_lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008517, VkglTestCase_008517_1, VkglTestCase_008517_2);

#define VkglTestCase_008518_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008518_2 "basic_type.packed.column_major_mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008518, VkglTestCase_008518_1, VkglTestCase_008518_2);

#define VkglTestCase_008519_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008519_2 "_basic_type.packed.column_major_highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008519, VkglTestCase_008519_1, VkglTestCase_008519_2);

#define VkglTestCase_008520_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008520_2 "single_basic_type.packed.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008520, VkglTestCase_008520_1, VkglTestCase_008520_2);

#define VkglTestCase_008521_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008521_2 "ngle_basic_type.packed.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008521, VkglTestCase_008521_1, VkglTestCase_008521_2);

#define VkglTestCase_008522_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008522_2 "ingle_basic_type.packed.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008522, VkglTestCase_008522_1, VkglTestCase_008522_2);

#define VkglTestCase_008523_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008523_2 "e_basic_type.packed.row_major_lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008523, VkglTestCase_008523_1, VkglTestCase_008523_2);

#define VkglTestCase_008524_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008524_2 "basic_type.packed.row_major_mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008524, VkglTestCase_008524_1, VkglTestCase_008524_2);

#define VkglTestCase_008525_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008525_2 "_basic_type.packed.row_major_highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008525, VkglTestCase_008525_1, VkglTestCase_008525_2);

#define VkglTestCase_008526_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008526_2 "basic_type.packed.column_major_lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008526, VkglTestCase_008526_1, VkglTestCase_008526_2);

#define VkglTestCase_008527_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008527_2 "asic_type.packed.column_major_mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008527, VkglTestCase_008527_1, VkglTestCase_008527_2);

#define VkglTestCase_008528_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008528_2 "basic_type.packed.column_major_highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008528, VkglTestCase_008528_1, VkglTestCase_008528_2);

#define VkglTestCase_008529_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008529_2 "single_basic_type.packed.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008529, VkglTestCase_008529_1, VkglTestCase_008529_2);

#define VkglTestCase_008530_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008530_2 "ngle_basic_type.packed.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008530, VkglTestCase_008530_1, VkglTestCase_008530_2);

#define VkglTestCase_008531_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008531_2 "ingle_basic_type.packed.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008531, VkglTestCase_008531_1, VkglTestCase_008531_2);

#define VkglTestCase_008532_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008532_2 "e_basic_type.packed.row_major_lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008532, VkglTestCase_008532_1, VkglTestCase_008532_2);

#define VkglTestCase_008533_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008533_2 "basic_type.packed.row_major_mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008533, VkglTestCase_008533_1, VkglTestCase_008533_2);

#define VkglTestCase_008534_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008534_2 "_basic_type.packed.row_major_highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008534, VkglTestCase_008534_1, VkglTestCase_008534_2);

#define VkglTestCase_008535_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008535_2 "basic_type.packed.column_major_lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008535, VkglTestCase_008535_1, VkglTestCase_008535_2);

#define VkglTestCase_008536_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008536_2 "asic_type.packed.column_major_mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008536, VkglTestCase_008536_1, VkglTestCase_008536_2);

#define VkglTestCase_008537_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008537_2 "basic_type.packed.column_major_highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008537, VkglTestCase_008537_1, VkglTestCase_008537_2);

#define VkglTestCase_008538_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008538_2 "single_basic_type.packed.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008538, VkglTestCase_008538_1, VkglTestCase_008538_2);

#define VkglTestCase_008539_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008539_2 "ngle_basic_type.packed.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008539, VkglTestCase_008539_1, VkglTestCase_008539_2);

#define VkglTestCase_008540_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008540_2 "ingle_basic_type.packed.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008540, VkglTestCase_008540_1, VkglTestCase_008540_2);

#define VkglTestCase_008541_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008541_2 "e_basic_type.packed.row_major_lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008541, VkglTestCase_008541_1, VkglTestCase_008541_2);

#define VkglTestCase_008542_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008542_2 "basic_type.packed.row_major_mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008542, VkglTestCase_008542_1, VkglTestCase_008542_2);

#define VkglTestCase_008543_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008543_2 "_basic_type.packed.row_major_highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008543, VkglTestCase_008543_1, VkglTestCase_008543_2);

#define VkglTestCase_008544_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008544_2 "basic_type.packed.column_major_lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008544, VkglTestCase_008544_1, VkglTestCase_008544_2);

#define VkglTestCase_008545_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008545_2 "asic_type.packed.column_major_mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008545, VkglTestCase_008545_1, VkglTestCase_008545_2);

#define VkglTestCase_008546_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008546_2 "basic_type.packed.column_major_highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008546, VkglTestCase_008546_1, VkglTestCase_008546_2);

#define VkglTestCase_008547_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008547_2 "single_basic_type.packed.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008547, VkglTestCase_008547_1, VkglTestCase_008547_2);

#define VkglTestCase_008548_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008548_2 "ngle_basic_type.packed.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008548, VkglTestCase_008548_1, VkglTestCase_008548_2);

#define VkglTestCase_008549_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008549_2 "ingle_basic_type.packed.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008549, VkglTestCase_008549_1, VkglTestCase_008549_2);

#define VkglTestCase_008550_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008550_2 "e_basic_type.packed.row_major_lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008550, VkglTestCase_008550_1, VkglTestCase_008550_2);

#define VkglTestCase_008551_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008551_2 "basic_type.packed.row_major_mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008551, VkglTestCase_008551_1, VkglTestCase_008551_2);

#define VkglTestCase_008552_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008552_2 "_basic_type.packed.row_major_highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008552, VkglTestCase_008552_1, VkglTestCase_008552_2);

#define VkglTestCase_008553_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008553_2 "basic_type.packed.column_major_lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008553, VkglTestCase_008553_1, VkglTestCase_008553_2);

#define VkglTestCase_008554_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008554_2 "asic_type.packed.column_major_mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008554, VkglTestCase_008554_1, VkglTestCase_008554_2);

#define VkglTestCase_008555_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008555_2 "basic_type.packed.column_major_highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008555, VkglTestCase_008555_1, VkglTestCase_008555_2);

#define VkglTestCase_008556_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008556_2 "single_basic_type.packed.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008556, VkglTestCase_008556_1, VkglTestCase_008556_2);

#define VkglTestCase_008557_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008557_2 "ngle_basic_type.packed.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008557, VkglTestCase_008557_1, VkglTestCase_008557_2);

#define VkglTestCase_008558_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008558_2 "ingle_basic_type.packed.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008558, VkglTestCase_008558_1, VkglTestCase_008558_2);

#define VkglTestCase_008559_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008559_2 "e_basic_type.packed.row_major_lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008559, VkglTestCase_008559_1, VkglTestCase_008559_2);

#define VkglTestCase_008560_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008560_2 "basic_type.packed.row_major_mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008560, VkglTestCase_008560_1, VkglTestCase_008560_2);

#define VkglTestCase_008561_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008561_2 "_basic_type.packed.row_major_highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008561, VkglTestCase_008561_1, VkglTestCase_008561_2);

#define VkglTestCase_008562_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008562_2 "basic_type.packed.column_major_lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008562, VkglTestCase_008562_1, VkglTestCase_008562_2);

#define VkglTestCase_008563_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008563_2 "asic_type.packed.column_major_mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008563, VkglTestCase_008563_1, VkglTestCase_008563_2);

#define VkglTestCase_008564_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008564_2 "basic_type.packed.column_major_highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008564, VkglTestCase_008564_1, VkglTestCase_008564_2);

#define VkglTestCase_008565_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_008565_2 "single_basic_type.packed.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008565, VkglTestCase_008565_1, VkglTestCase_008565_2);

#define VkglTestCase_008566_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008566_2 "ngle_basic_type.packed.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008566, VkglTestCase_008566_1, VkglTestCase_008566_2);

#define VkglTestCase_008567_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_008567_2 "ingle_basic_type.packed.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008567, VkglTestCase_008567_1, VkglTestCase_008567_2);

#define VkglTestCase_008568_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008568_2 "e_basic_type.packed.row_major_lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008568, VkglTestCase_008568_1, VkglTestCase_008568_2);

#define VkglTestCase_008569_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008569_2 "basic_type.packed.row_major_mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008569, VkglTestCase_008569_1, VkglTestCase_008569_2);

#define VkglTestCase_008570_1 "dEQP-GLES31.functional.ssbo.layout.single"
#define VkglTestCase_008570_2 "_basic_type.packed.row_major_highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008570, VkglTestCase_008570_1, VkglTestCase_008570_2);

#define VkglTestCase_008571_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008571_2 "basic_type.packed.column_major_lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008571, VkglTestCase_008571_1, VkglTestCase_008571_2);

#define VkglTestCase_008572_1 "dEQP-GLES31.functional.ssbo.layout.single_b"
#define VkglTestCase_008572_2 "asic_type.packed.column_major_mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008572, VkglTestCase_008572_1, VkglTestCase_008572_2);

#define VkglTestCase_008573_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_008573_2 "basic_type.packed.column_major_highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008573, VkglTestCase_008573_1, VkglTestCase_008573_2);
